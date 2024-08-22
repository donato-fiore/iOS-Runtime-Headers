// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NLGAZETTEER_H
#define NLGAZETTEER_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface NLGazetteer : NSObject {
    *void _gazetteer;
}


@property (readonly, copy) NSData *data;
@property (readonly, copy) NSString *language; // ivar: _language


+(BOOL)writeGazetteerForDictionary:(id)arg0 language:(id)arg1 toURL:(id)arg2 error:(*id)arg3 ;
+(BOOL)writeGazetteerMLModelForDictionary:(id)arg0 language:(id)arg1 toURL:(id)arg2 options:(id)arg3 error:(*id)arg4 ;
+(id)gazetteerWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
+(id)gazetteerWithData:(id)arg0 error:(*id)arg1 ;
+(id)gazetteerWithMLModel:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeMLModelToURL:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)initWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithDictionary:(id)arg0 language:(id)arg1 error:(*id)arg2 ;
-(id)initWithMLModel:(id)arg0 error:(*id)arg1 ;
-(id)initWithNLModel:(id)arg0 error:(*id)arg1 ;
-(id)labelForString:(id)arg0 ;
-(id)labels;
-(id)modelDescription;
-(void)_addImplementationToArray:(struct __CFArray *)arg0 ;
-(void)dealloc;


@end


#endif
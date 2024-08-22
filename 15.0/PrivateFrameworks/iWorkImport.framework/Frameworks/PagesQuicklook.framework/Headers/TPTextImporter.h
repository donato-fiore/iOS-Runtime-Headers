// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPTEXTIMPORTER_H
#define TPTEXTIMPORTER_H

@class NSURL, NSString, TSUProgressContext;
@protocol TSKImporter;

#import <Foundation/Foundation.h>


@interface TPTextImporter : NSObject <TSKImporter>

 {
    NSURL *mURL;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TSUProgressContext *progressContext; // ivar: mProgressContext
@property (readonly) Class superclass;


-(BOOL)importStartsWithThemeOnly;
-(BOOL)importToDocumentRoot:(id)arg0 delegate:(id)arg1 error:(*id)arg2 ;
-(BOOL)stylesheetUpdatesRequired;
-(id)initWithURL:(id)arg0 ;
-(id)initialTemplateName;
-(void)cancel;
-(void)quit;
-(void)setURL:(id)arg0 ;


@end


#endif
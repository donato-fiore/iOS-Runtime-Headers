// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAFDEFAULTSERIALIZER_H
#define AAFDEFAULTSERIALIZER_H

@class NSArray;
@protocol AAFSerializer;

#import <Foundation/Foundation.h>


@interface AAFDefaultSerializer : NSObject <AAFSerializer>



@property (readonly) NSArray *mediaTypes;


-(id)_className;
-(id)_dataFromDictionary:(id)arg0 error:(*id)arg1 ;
-(id)_dictionaryFromObject:(id)arg0 error:(*id)arg1 ;
-(id)dataFromDictionary:(id)arg0 ;
-(id)dataFromDictionary:(id)arg0 error:(*id)arg1 ;
-(id)dictionaryFromObject:(id)arg0 ;
-(id)dictionaryFromObject:(id)arg0 error:(*id)arg1 ;
-(id)stringFromData:(id)arg0 ;
-(id)stringFromDictionary:(id)arg0 ;
-(void)_raiseException:(id)arg0 ;


@end


#endif
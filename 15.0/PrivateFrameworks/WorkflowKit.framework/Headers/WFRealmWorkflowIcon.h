// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFREALMWORKFLOWICON_H
#define WFREALMWORKFLOWICON_H

@class NSData;
@protocol NSCopying;


#import "RLMObject.h"
#import "RLMLinkingObjects.h"

@interface WFRealmWorkflowIcon : RLMObject <NSCopying>



@property (nonatomic) NSInteger backgroundColorValue; // ivar: _backgroundColorValue
@property (copy, nonatomic) NSData *customImageData; // ivar: _customImageData
@property (nonatomic) NSInteger glyphNumber; // ivar: _glyphNumber
@property (readonly) RLMLinkingObjects *workflows; // ivar: _workflows


+(id)className;
+(id)defaultPropertyValues;
+(id)linkingObjectsProperties;
+(id)requiredProperties;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif
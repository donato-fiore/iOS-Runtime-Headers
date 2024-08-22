// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASITNALIGNMENT_H
#define SASITNALIGNMENT_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SASItnAlignment : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger firstPostItnCharPos;
@property (nonatomic) NSInteger firstPreItnTokenIndex;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger lastPostItnCharPos;
@property (nonatomic) NSInteger lastPreItnTokenIndex;
@property (readonly) Class superclass;


+(id)itnAlignment;
+(id)itnAlignmentWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif
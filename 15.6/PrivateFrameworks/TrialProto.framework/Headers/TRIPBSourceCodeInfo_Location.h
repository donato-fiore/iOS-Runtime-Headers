// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIPBSOURCECODEINFO_LOCATION_H
#define TRIPBSOURCECODEINFO_LOCATION_H

@class NSString, NSMutableArray;


#import "TRIPBMessage.h"
#import "TRIPBInt32Array.h"

@interface TRIPBSourceCodeInfo_Location : TRIPBMessage

@property (nonatomic) BOOL hasLeadingComments;
@property (nonatomic) BOOL hasTrailingComments;
@property (copy, nonatomic) NSString *leadingComments;
@property (retain, nonatomic) NSMutableArray *leadingDetachedCommentsArray;
@property (readonly, nonatomic) NSUInteger leadingDetachedCommentsArray_Count;
@property (retain, nonatomic) TRIPBInt32Array *pathArray;
@property (readonly, nonatomic) NSUInteger pathArray_Count;
@property (retain, nonatomic) TRIPBInt32Array *spanArray;
@property (readonly, nonatomic) NSUInteger spanArray_Count;
@property (copy, nonatomic) NSString *trailingComments;


+(id)descriptor;


@end


#endif
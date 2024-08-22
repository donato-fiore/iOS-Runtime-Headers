// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRMEDIAINPUTCLUSTERINPUTINFOSTRUCT_H
#define MTRMEDIAINPUTCLUSTERINPUTINFOSTRUCT_H

@class NSString, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRMediaInputClusterInputInfoStruct : NSObject <NSCopying>



@property (copy, nonatomic) NSString *descriptionString; // ivar: _descriptionString
@property (copy, nonatomic) NSNumber *index; // ivar: _index
@property (copy, nonatomic) NSNumber *inputType; // ivar: _inputType
@property (copy, nonatomic) NSString *name; // ivar: _name


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif
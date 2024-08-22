// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMSTREAMSACCESSDESCRIPTOR_H
#define BMSTREAMSACCESSDESCRIPTOR_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface BMStreamsAccessDescriptor : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger permissions; // ivar: _permissions
@property (readonly, nonatomic) NSString *streamIdentifier; // ivar: _streamIdentifier
@property (readonly, nonatomic) NSUInteger streamType; // ivar: _streamType


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)accessDescriptorWithPermissions:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithPermissions:(NSUInteger)arg0 streamType:(NSUInteger)arg1 streamIdentifier:(id)arg2 ;


@end


#endif
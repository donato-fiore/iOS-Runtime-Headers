// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARCOLLABORATIONDATA_H
#define ARCOLLABORATIONDATA_H

@class NSUUID, NSSet, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ARCollaborationData : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSUUID *anchorIdentifier; // ivar: _anchorIdentifier
@property (retain, nonatomic) NSSet *anchors; // ivar: _anchors
@property (readonly, nonatomic) NSInteger priority; // ivar: _priority
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (readonly, nonatomic) NSInteger version; // ivar: _version
@property (readonly, nonatomic) NSData *vioData; // ivar: _vioData
@property (readonly, nonatomic) NSInteger vioDataType; // ivar: _vioDataType
@property (readonly, nonatomic) NSUInteger vioSessionID; // ivar: _vioSessionID


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVIOData:(id)arg0 type:(NSInteger)arg1 sessionID:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NARWORKSPACEINFO_H
#define NARWORKSPACEINFO_H

@class NSUUID, NSArray, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NARWorkspaceInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, nonatomic) NSArray *applications; // ivar: _applications
@property (readonly, nonatomic) NSNumber *sequenceNumber; // ivar: _sequenceNumber
@property (readonly, nonatomic) NSArray *standaloneGlances; // ivar: _standaloneGlances


+(BOOL)supportsSecureCoding;
-(id)initWithApplications:(id)arg0 UUID:(id)arg1 sequenceNumber:(id)arg2 ;
-(id)initWithApplications:(id)arg0 UUID:(id)arg1 sequenceNumber:(id)arg2 standaloneGlances:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
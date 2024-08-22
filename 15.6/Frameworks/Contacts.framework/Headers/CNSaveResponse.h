// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNSAVERESPONSE_H
#define CNSAVERESPONSE_H

@class NSMutableDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CNSaveResponse : NSObject <NSSecureCoding>

 {
    NSMutableDictionary *_contactSnapshotsByIndexPath;
    NSMutableDictionary *_groupSnapshotsByIndexPath;
    NSMutableDictionary *_containerSnapshotsByIndexPath;
    BOOL _didAffectMeCard;
}


@property (readonly) BOOL didAffectMeCard;


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)applySnapshotsToSaveRequest:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
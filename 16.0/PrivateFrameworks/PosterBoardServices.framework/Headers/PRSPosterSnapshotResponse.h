// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRSPOSTERSNAPSHOTRESPONSE_H
#define PRSPOSTERSNAPSHOTRESPONSE_H

@class NSString, NSArray;
@protocol BSXPCSecureCoding;

#import <Foundation/Foundation.h>


@interface PRSPosterSnapshotResponse : NSObject <BSXPCSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *snapshots; // ivar: _snapshots
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithSnapshots:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif
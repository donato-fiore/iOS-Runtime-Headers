// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMSNETWORKACTIVITY_H
#define CMSNETWORKACTIVITY_H

@protocol NSSecureCoding, OS_nw_activity;

#import <Foundation/Foundation.h>


@interface CMSNetworkActivity : NSObject <NSSecureCoding>

 {
    BOOL _completed;
}


@property (readonly, nonatomic) unsigned int label; // ivar: _label
@property (readonly, nonatomic) NSObject<OS_nw_activity> *nwActivity; // ivar: _nwActivity


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLabel:(unsigned int)arg0 parentActivity:(id)arg1 ;
-(id)initWithLabel:(unsigned int)arg0 parentUUID:(id)arg1 ;
-(id)initWithRetry:(id)arg0 ;
-(void)associateWithTask:(id)arg0 ;
-(void)completeActivity:(int)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
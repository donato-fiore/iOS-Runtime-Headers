// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSIDINFOOPTIONS_H
#define IDSIDINFOOPTIONS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface IDSIDInfoOptions : NSObject <NSSecureCoding>



@property (nonatomic) BOOL allowRefresh; // ivar: _allowRefresh
@property (nonatomic) BOOL bypassLimit; // ivar: _bypassLimit
@property (nonatomic) BOOL forceRefresh; // ivar: _forceRefresh
@property (nonatomic) BOOL respectExpiry; // ivar: _respectExpiry
@property (nonatomic) BOOL waitForReply; // ivar: _waitForReply


+(BOOL)supportsSecureCoding;
+(id)currentIDInfo;
+(id)refreshIDInfo;
+(id)refreshIDInfoAndBypassLimit;
+(id)sync_currentIDInfo;
+(id)sync_refreshIDInfo;
-(id)init;
-(id)initWithBypassLimit:(BOOL)arg0 allowRefresh:(BOOL)arg1 forceRefresh:(BOOL)arg2 respectExpiry:(BOOL)arg3 waitForReply:(BOOL)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
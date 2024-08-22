// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSPLAYINFOREQUESTCONTEXT_H
#define SSPLAYINFOREQUESTCONTEXT_H

@class NSData, NSNumber, NSString, NSArray;
@protocol SSXPCCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SSPlayInfoRequestContext : NSObject <SSXPCCoding, NSCopying>



@property (copy, nonatomic) NSData *SICData; // ivar: _sic
@property (copy, nonatomic) NSNumber *accountIdentifier; // ivar: _accountIdentifier
@property (copy, nonatomic) NSNumber *contentIdentifier; // ivar: _contentIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *playbackType; // ivar: _playbackType
@property (copy, nonatomic) NSString *playerGUID; // ivar: _playerGUID
@property (copy, nonatomic) NSArray *sinfs; // ivar: _sinfs
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)dealloc;


@end


#endif
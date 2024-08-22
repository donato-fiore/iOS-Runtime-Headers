// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ICQBANNERSPECIFICATION_H
#define _ICQBANNERSPECIFICATION_H

@class NSDictionary, NSArray, NSString, NSURL;

#import <Foundation/Foundation.h>


@interface _ICQBannerSpecification : NSObject {
    NSDictionary *_serverDict;
}


@property (readonly, nonatomic) BOOL isDetailBannerInfoAvailable; // ivar: _isDetailBannerInfoAvailable
@property (retain, nonatomic) NSArray *links; // ivar: _links
@property (retain, nonatomic) NSString *linksFormat; // ivar: _linksFormat
@property (readonly, nonatomic) NSDictionary *messageTemplates; // ivar: _messageTemplates
@property (readonly, nonatomic) BOOL placeholderExists; // ivar: _placeholderExists
@property (retain, nonatomic) NSURL *remoteUIURL; // ivar: _remoteUIURL
@property (readonly, nonatomic) NSDictionary *titleTemplates; // ivar: _titleTemplates


+(id)bannerSpecificationSampleForLevel:(NSInteger)arg0 ;
-(id)initWithDetailBannerInfo:(id)arg0 ;
-(id)initWithServerDictionary:(id)arg0 ;
-(id)messageWithKey:(id)arg0 ;
-(id)titleWithKey:(id)arg0 ;
-(void)setMessageWithServerMessage:(id)arg0 ;


@end


#endif
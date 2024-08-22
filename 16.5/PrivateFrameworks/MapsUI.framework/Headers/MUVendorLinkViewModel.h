// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUVENDORLINKVIEWMODEL_H
#define MUVENDORLINKVIEWMODEL_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface MUVendorLinkViewModel : NSObject

@property (copy, nonatomic) NSString *appAdamId; // ivar: _appAdamId
@property (copy, nonatomic) NSString *appShortName; // ivar: _appShortName
@property (retain, nonatomic) NSURL *artworkURL; // ivar: _artworkURL
@property (nonatomic) int linkType; // ivar: _linkType
@property (copy, nonatomic) NSString *linkTypeString; // ivar: _linkTypeString
@property (copy, nonatomic) NSString *providerName; // ivar: _providerName
@property (readonly, nonatomic) NSString *uniqueIdentifier;


-(id)description;


@end


#endif
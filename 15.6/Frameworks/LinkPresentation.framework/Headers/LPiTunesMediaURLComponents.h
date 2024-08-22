// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPITUNESMEDIAURLCOMPONENTS_H
#define LPITUNESMEDIAURLCOMPONENTS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface LPiTunesMediaURLComponents : NSObject

@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *storefrontCountryCode; // ivar: _storefrontCountryCode


+(id)identifierFromQueryItems:(id)arg0 pathComponent:(id)arg1 ;
+(id)storefrontCountryCodeFromPathComponent:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;


@end


#endif
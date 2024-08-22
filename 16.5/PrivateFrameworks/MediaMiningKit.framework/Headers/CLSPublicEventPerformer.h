// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSPUBLICEVENTPERFORMER_H
#define CLSPUBLICEVENTPERFORMER_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLSPublicEventPerformer : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *iTunesIdentifier; // ivar: _iTunesIdentifier
@property (readonly, nonatomic) NSString *localizedName; // ivar: _localizedName


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocalizedName:(id)arg0 iTunesIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
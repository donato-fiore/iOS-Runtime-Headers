// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSHARINGMESSAGEDISPLAYINFORMATION_H
#define PKSHARINGMESSAGEDISPLAYINFORMATION_H

@class NSURL, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKSharingMessageDisplayInformation : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSURL *imageURL; // ivar: _imageURL
@property (retain, nonatomic) NSURL *openGraphURL; // ivar: _openGraphURL
@property (readonly, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 imageURL:(id)arg2 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 imageURL:(id)arg2 openGraphURL:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
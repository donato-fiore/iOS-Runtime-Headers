// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCABLELOGINCHOICE_H
#define ASCABLELOGINCHOICE_H

@class NSString, NSURL;
@protocol ASCLoginChoiceProtocol;

#import <Foundation/Foundation.h>


@interface ASCABLELoginChoice : NSObject <ASCLoginChoiceProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger loginChoiceKind;
@property (readonly, copy, nonatomic) NSURL *qrCodeURL; // ivar: _qrCodeURL
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithQRCodeURL:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
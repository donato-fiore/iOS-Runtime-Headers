// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDIALOGRESPONSE_H
#define WFDIALOGRESPONSE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFDialogResponse : NSObject <NSSecureCoding>



@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) NSInteger responseCode; // ivar: _responseCode


+(BOOL)supportsSecureCoding;
-(BOOL)shouldDismissDialogInTransientMode;
-(id)description;
-(id)initWithCancelled:(BOOL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResponseCode:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
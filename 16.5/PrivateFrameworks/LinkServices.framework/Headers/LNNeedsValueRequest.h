// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNNEEDSVALUEREQUEST_H
#define LNNEEDSVALUEREQUEST_H

@class LNDialog, NSUUID, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface LNNeedsValueRequest : NSObject <NSSecureCoding>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, nonatomic) LNDialog *dialog; // ivar: _dialog
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *parameterName; // ivar: _parameterName


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 parameterName:(id)arg1 dialog:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)respondWithError:(id)arg0 ;
-(void)respondWithValue:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNDISAMBIGUATIONREQUEST_H
#define LNDISAMBIGUATIONREQUEST_H

@class LNDialog, NSUUID, NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface LNDisambiguationRequest : NSObject <NSSecureCoding>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy, nonatomic) LNDialog *dialog; // ivar: _dialog
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSString *parameterName; // ivar: _parameterName
@property (readonly, nonatomic) NSArray *providedValues; // ivar: _providedValues


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 parameterName:(id)arg1 providedValues:(id)arg2 dialog:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)respondWithError:(id)arg0 ;
-(void)respondWithSelectedIndex:(NSInteger)arg0 ;
-(void)respondWithSelectedItemIndex:(NSInteger)arg0 ;
-(void)respondWithValue:(id)arg0 ;
-(void)responseWithSelectedIndex:(id)arg0 value:(id)arg1 ;


@end


#endif
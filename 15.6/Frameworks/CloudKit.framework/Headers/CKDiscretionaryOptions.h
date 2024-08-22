// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDISCRETIONARYOPTIONS_H
#define CKDISCRETIONARYOPTIONS_H

@class NSString;
@protocol NSSecureCoding, NSCoding;

#import <Foundation/Foundation.h>


@interface CKDiscretionaryOptions : NSObject <NSSecureCoding, NSCoding>



@property (nonatomic) BOOL allowsCellularAccess; // ivar: _allowsCellularAccess
@property (nonatomic) BOOL allowsExpensiveNetworkAccess; // ivar: _allowsExpensiveNetworkAccess
@property (retain, nonatomic) NSString *applicationBundleIdentifierOverride; // ivar: _applicationBundleIdentifierOverride
@property (nonatomic) NSUInteger discretionaryNetworkBehavior; // ivar: _discretionaryNetworkBehavior
@property (retain, nonatomic) NSString *secondarySourceApplicationBundleId; // ivar: _secondarySourceApplicationBundleId
@property (nonatomic) CGFloat timeoutIntervalForResource; // ivar: _timeoutIntervalForResource


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
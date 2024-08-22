// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKCONTENT_H
#define PKCONTENT_H

@class NSURL, NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKBarcode.h"

@interface PKContent : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSURL *appLaunchURL; // ivar: _appLaunchURL
@property (retain, nonatomic) PKBarcode *barcode; // ivar: _barcode
@property (copy, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (copy, nonatomic) NSArray *storeIdentifiers; // ivar: _storeIdentifiers
@property (copy, nonatomic) NSArray *systemAppBundleIdentifiers; // ivar: _systemAppBundleIdentifiers


+(BOOL)supportsSecureCoding;
+(id)createWithFileURL:(id)arg0 dataTypeIdentifier:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 bundle:(id)arg1 privateBundle:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)flushFormattedFieldValues;


@end


#endif
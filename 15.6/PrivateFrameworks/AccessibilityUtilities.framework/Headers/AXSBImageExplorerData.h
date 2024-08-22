// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXSBIMAGEEXPLORERDATA_H
#define AXSBIMAGEEXPLORERDATA_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AXSBImageExplorerData : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *axLabel; // ivar: _axLabel
@property (retain, nonatomic) NSArray *customContent; // ivar: _customContent
@property (retain, nonatomic) NSString *hostAppBundleID; // ivar: _hostAppBundleID
@property (retain, nonatomic) NSString *hostAppName; // ivar: _hostAppName


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
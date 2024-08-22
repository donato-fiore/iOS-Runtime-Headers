// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ACPLUGINDBBUNDLE_H
#define _ACPLUGINDBBUNDLE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _ACPluginDBBundle : NSObject <NSSecureCoding>

 {
    NSString *mFullPath;
    CGFloat mInfoPlistModDate;
    CGFloat mRsrcModDate;
    AudioComponentVector mBundleComponentVector;
}




+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPath:(id)arg0 infoPlistModDate:(CGFloat)arg1 rsrcModDate:(CGFloat)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadAllComponents:(*void)arg0 ;
-(void)scanWithPriority:(int)arg0 loadable:(BOOL)arg1 infoPlistPath:(id)arg2 ;


@end


#endif
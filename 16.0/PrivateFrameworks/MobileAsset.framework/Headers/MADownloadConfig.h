// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MADOWNLOADCONFIG_H
#define MADOWNLOADCONFIG_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MADownloadConfig : NSObject <NSSecureCoding>



@property (nonatomic) BOOL discretionary; // ivar: _discretionary


+(BOOL)supportsSecureCoding;
-(id)encodeAsPlist;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPlist:(id)arg0 ;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;
-(void)logConfig;


@end


#endif
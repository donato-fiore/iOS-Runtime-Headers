// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8SETTINGS24INITIALIZATIONPARAMETERS_H
#define _TTC8SETTINGS24INITIALIZATIONPARAMETERS_H

@class NSString;
@protocol _EXSceneInitializationParameters;

#import <Foundation/Foundation.h>


@interface _TtC8Settings24InitializationParameters : NSObject <_EXSceneInitializationParameters>

 {
    ? itemIdentifier;
    ? anchor;
    ? contentWidth;
    ? $__lazy_storage_$_isDefault;
}


@property (nonatomic, readonly) NSString *description;


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
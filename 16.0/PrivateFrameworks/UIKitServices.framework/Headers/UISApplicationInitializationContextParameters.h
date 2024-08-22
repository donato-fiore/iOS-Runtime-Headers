// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISAPPLICATIONINITIALIZATIONCONTEXTPARAMETERS_H
#define UISAPPLICATIONINITIALIZATIONCONTEXTPARAMETERS_H

@class NSString, NSArray;
@protocol BSXPCCoding;

#import <Foundation/Foundation.h>


@interface UISApplicationInitializationContextParameters : NSObject <BSXPCCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *deviceFamilies; // ivar: _deviceFamilies
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int initialCGDirectDisplayID; // ivar: _initialCGDirectDisplayID
@property (nonatomic) BOOL preferSmallerDisplaySize; // ivar: _preferSmallerDisplaySize
@property (nonatomic) BOOL requiresFullScreen; // ivar: _requiresFullScreen
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger supportedInterfaceOrientations; // ivar: _supportedInterfaceOrientations
@property (nonatomic) BOOL supportsMultiwindow; // ivar: _supportsMultiwindow
@property (nonatomic) CGSize usableDisplaySizeHint; // ivar: _usableDisplaySizeHint
@property (nonatomic) BOOL useTrueDisplaySize; // ivar: _useTrueDisplaySize


-(id)init;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif
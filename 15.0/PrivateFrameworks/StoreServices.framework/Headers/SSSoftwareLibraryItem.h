// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSSOFTWARELIBRARYITEM_H
#define SSSOFTWARELIBRARYITEM_H

@class NSMutableDictionary, NSString;
@protocol SSXPCCoding;

#import <Foundation/Foundation.h>


@interface SSSoftwareLibraryItem : NSObject <SSXPCCoding>

 {
    NSMutableDictionary *_etags;
    NSMutableDictionary *_propertyValues;
}


@property (nonatomic, getter=isBeta) BOOL beta; // ivar: _beta
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isLaunchProhibited) BOOL launchProhibited; // ivar: _launchProhibited
@property (nonatomic, getter=isPlaceholder) BOOL placeholder; // ivar: _placeholder
@property (nonatomic, getter=isProfileValidated) BOOL profileValidated; // ivar: _profileValidated
@property (readonly) Class superclass;


-(BOOL)setETag:(id)arg0 forAssetType:(id)arg1 error:(*id)arg2 ;
-(id)ETagForAssetType:(id)arg0 ;
-(id)_initWithITunesMetadata:(id)arg0 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg0 ;
-(id)valueForProperty:(id)arg0 ;
-(void)_setValue:(id)arg0 forProperty:(id)arg1 ;
-(void)dealloc;


@end


#endif
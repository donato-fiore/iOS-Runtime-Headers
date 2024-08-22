// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIDECARSERVICE_H
#define SIDECARSERVICE_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "SidecarDevice.h"

@interface SidecarService : NSObject {
    SidecarDevice *_targetDevice;
}


@property (readonly, nonatomic) NSArray *devices;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) NSString *localizedItemName;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *pasteboardTypes;
@property (readonly, nonatomic) NSArray *returnTypes;
@property (readonly, nonatomic) NSArray *sendTypes;
@property (readonly, nonatomic) NSString *serviceExtension;
@property (readonly, nonatomic) NSString *serviceIdentifier;


+(NSInteger)minimumRapportVersion;
+(id)allMenuServices;
+(id)allReturnTypes;
+(id)allSendTypes;
+(id)allServices;
+(id)extensionForIdentifier:(id)arg0 ;
+(id)menuServices;
+(id)serviceWithIdentifier:(id)arg0 ;
+(id)serviceWithName:(id)arg0 ;
+(id)services;
+(id)servicesForPasteboardSendTypes:(id)arg0 returnTypes:(id)arg1 ;
+(id)servicesForPasteboardTypes:(id)arg0 ;
+(id)supportedPasteboardTypes;
-(id)copyWithDevice:(id)arg0 ;
-(id)init;
-(id)initWithDevice:(id)arg0 ;
-(id)makeRequest;
-(id)makeRequestToDevice:(id)arg0 ;
-(id)makeRequestWithResponder:(id)arg0 sendTypes:(id)arg1 returnTypes:(id)arg2 ;
-(id)mutableRequestMessage;


@end


#endif
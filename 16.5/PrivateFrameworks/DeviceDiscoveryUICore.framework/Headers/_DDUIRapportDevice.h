// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DDUIRAPPORTDEVICE_H
#define _DDUIRAPPORTDEVICE_H

@class NSString;
@protocol DDUIDevice;

#import <Foundation/Foundation.h>


@interface _DDUIRapportDevice : NSObject <DDUIDevice>



@property (retain, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int deviceType; // ivar: _deviceType
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isMine; // ivar: _isMine
@property (retain, nonatomic) NSString *model; // ivar: _model
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;


-(id)initWithIncomingMessageOptions:(id)arg0 ;
-(id)initWithRPCompanionLinkDevice:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CXCHANNELUPDATE_H
#define CXCHANNELUPDATE_H

@class NSUUID, NSString, NSURL;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CXParticipant.h"
#import "CXSandboxExtendedURL.h"

@interface CXChannelUpdate : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (retain, nonatomic) CXParticipant *activeRemoteParticipant; // ivar: _activeRemoteParticipant
@property (nonatomic) NSInteger audioBluetoothFormat; // ivar: _audioBluetoothFormat
@property (copy, nonatomic) NSString *audioCategory; // ivar: _audioCategory
@property (nonatomic) NSInteger audioInterruptionOperationMode; // ivar: _audioInterruptionOperationMode
@property (nonatomic) NSInteger audioInterruptionProvider; // ivar: _audioInterruptionProvider
@property (copy, nonatomic) NSString *audioMode; // ivar: _audioMode
@property (readonly, nonatomic) CXChannelUpdateHasSet hasSet; // ivar: _hasSet
@property (copy, nonatomic) NSURL *imageURL;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) CXSandboxExtendedURL *sandboxExtendedImageURL; // ivar: _sandboxExtendedImageURL
@property (nonatomic) NSInteger serviceStatus; // ivar: _serviceStatus
@property (nonatomic) NSInteger transmissionMode; // ivar: _transmissionMode


+(BOOL)supportsSecureCoding;
+(id)unarchivedObjectClasses;
+(id)unarchivedObjectFromData:(id)arg0 error:(*id)arg1 ;
-(id)archivedDataWithError:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)sanitizedCopy;
-(id)sanitizedCopyWithZone:(struct _NSZone *)arg0 ;
-(id)updateWithUpdate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;
-(void)updateSanitizedCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;


@end


#endif
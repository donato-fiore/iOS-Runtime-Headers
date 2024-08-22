// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDDEVICE_H
#define DDDEVICE_H

@class NSUUID, NSString, NSDictionary, UTType, NSData, NSURL;
@protocol CUXPCCodable, NSSecureCoding, NSCopying, OS_nw_endpoint;

#import <Foundation/Foundation.h>


@interface DDDevice : NSObject <CUXPCCodable, NSSecureCoding, NSCopying>



@property (nonatomic) CGFloat approveTime; // ivar: _approveTime
@property (retain, nonatomic) NSUUID *bluetoothIdentifier; // ivar: _bluetoothIdentifier
@property (nonatomic) NSInteger category; // ivar: _category
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *mediaContentSubtitle; // ivar: _mediaContentSubtitle
@property (copy, nonatomic) NSString *mediaContentTitle; // ivar: _mediaContentTitle
@property (nonatomic) NSInteger mediaPlaybackState; // ivar: _mediaPlaybackState
@property (retain, nonatomic) NSObject<OS_nw_endpoint> *networkEndpoint; // ivar: _networkEndpoint
@property (readonly, copy, nonatomic) NSDictionary *persistentDictionaryRepresentation;
@property (nonatomic) NSInteger protocol; // ivar: _protocol
@property (retain, nonatomic) UTType *protocolType; // ivar: _protocolType
@property (nonatomic) NSInteger state; // ivar: _state
@property (copy, nonatomic) NSData *txtRecordData; // ivar: _txtRecordData
@property (copy, nonatomic) NSURL *url; // ivar: _url


+(BOOL)deviceMetadataURLValid:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(void)mergePersistentDictionary:(id)arg0 into:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createDADevice;
-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDisplayName:(id)arg0 category:(NSInteger)arg1 protocolType:(id)arg2 identifier:(id)arg3 ;
-(id)initWithPersistentDictionaryRepresentation:(id)arg0 error:(*id)arg1 ;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCObject:(id)arg0 ;


@end


#endif
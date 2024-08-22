// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DADEVICE_H
#define DADEVICE_H

@class NSUUID, NSDictionary, NSString, UTType, NSData, NSURL;
@protocol CUXPCCodable, NSSecureCoding, NSCopying, OS_nw_endpoint;

#import <Foundation/Foundation.h>


@interface DADevice : NSObject <CUXPCCodable, NSSecureCoding, NSCopying>



@property (nonatomic) CGFloat approveTime; // ivar: _approveTime
@property (retain, nonatomic) NSUUID *bluetoothIdentifier; // ivar: _bluetoothIdentifier
@property (copy, nonatomic) NSDictionary *endpoints; // ivar: _endpoints
@property (nonatomic) NSUInteger flags; // ivar: _flags
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *mediaContentArtistName; // ivar: _mediaContentArtistName
@property (copy, nonatomic) NSString *mediaContentTitle; // ivar: _mediaContentTitle
@property (nonatomic) NSInteger mediaPlaybackState; // ivar: _mediaPlaybackState
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSObject<OS_nw_endpoint> *networkEndpoint; // ivar: _networkEndpoint
@property (nonatomic) BOOL pendingRemoval; // ivar: _pendingRemoval
@property (readonly, copy, nonatomic) NSDictionary *persistentDictionaryRepresentation;
@property (nonatomic) NSInteger protocol; // ivar: _protocol
@property (retain, nonatomic) UTType *protocolType; // ivar: _protocolType
@property (nonatomic) NSInteger state; // ivar: _state
@property (copy, nonatomic) NSData *txtRecordData; // ivar: _txtRecordData
@property (nonatomic) NSInteger type; // ivar: _type
@property (copy, nonatomic) NSURL *url; // ivar: _url


+(BOOL)deviceMetadataURLValid:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(void)mergePersistentDictionary:(id)arg0 into:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPersistentDictionaryRepresentation:(id)arg0 error:(*id)arg1 ;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCObject:(id)arg0 ;


@end


#endif
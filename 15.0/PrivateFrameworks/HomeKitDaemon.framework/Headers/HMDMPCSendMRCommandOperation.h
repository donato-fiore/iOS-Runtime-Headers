// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDMPCSENDMRCOMMANDOPERATION_H
#define HMDMPCSENDMRCOMMANDOPERATION_H

@class HMFOperation, NSArray, NSString, MPCAssistantRemoteControlDestination, NSNumber, NSDictionary, MPPlaybackArchive;
@protocol HMFLogging, HMFObject, HMDMPCSendMRCommandOperationExternalObjectInterface;



@interface HMDMPCSendMRCommandOperation : HMFOperation <HMFLogging, HMFObject>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) MPCAssistantRemoteControlDestination *destination; // ivar: _destination
@property (readonly) NSObject<HMDMPCSendMRCommandOperationExternalObjectInterface> *externalObjectInterface; // ivar: _externalObjectInterface
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *mediaRemoteCommand; // ivar: _mediaRemoteCommand
@property (readonly, copy, nonatomic) NSDictionary *options; // ivar: _options
@property (readonly, nonatomic) MPPlaybackArchive *playbackArchive; // ivar: _playbackArchive
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithCommand:(unsigned int)arg0 options:(id)arg1 destination:(id)arg2 ;
-(id)initWithCommand:(unsigned int)arg0 options:(id)arg1 destination:(id)arg2 externalObjectInterface:(id)arg3 ;
-(id)initWithPlaybackArchive:(id)arg0 destination:(id)arg1 ;
-(id)initWithPlaybackArchive:(id)arg0 destination:(id)arg1 externalObjectInterface:(id)arg2 ;
-(void)main;


@end


#endif
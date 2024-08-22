// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKCONCRETESHARINGAIRDROPTRANSFER_H
#define CRKCONCRETESHARINGAIRDROPTRANSFER_H

@class NSString, NSArray, NSSet, SFAirDropClassroomTransferManager, NSData;
@protocol SFAirDropClassroomTransferDelegate, CRKSharingAirDropTransfer;

#import <Foundation/Foundation.h>


@interface CRKConcreteSharingAirDropTransfer : NSObject <SFAirDropClassroomTransferDelegate, CRKSharingAirDropTransfer>



@property (readonly, nonatomic) BOOL autoAccept; // ivar: _autoAccept
@property (readonly, copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *destFileURLs; // ivar: _destFileURLs
@property (readonly, copy, nonatomic) NSSet *fileURLs; // ivar: _fileURLs
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL hideProgress; // ivar: _hideProgress
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *itemsDescription; // ivar: _itemsDescription
@property (readonly, nonatomic) SFAirDropClassroomTransferManager *manager; // ivar: _manager
@property (readonly, copy, nonatomic) NSData *previewImageData; // ivar: _previewImageData
@property (readonly, nonatomic) id *resultHandler; // ivar: _resultHandler
@property (readonly, copy, nonatomic) NSString *senderName; // ivar: _senderName
@property (readonly, copy, nonatomic) NSString *sourceBundleID; // ivar: _sourceBundleID
@property (readonly) Class superclass;


+(NSInteger)transferStateForState:(NSInteger)arg0 ;
+(id)UTIForURL:(id)arg0 ;
+(id)infoForFileURL:(id)arg0 ;
-(id)initWithAutoAccept:(BOOL)arg0 hideProgress:(BOOL)arg1 senderName:(id)arg2 previewImageData:(id)arg3 bundleID:(id)arg4 sourceBundleID:(id)arg5 itemsDescription:(id)arg6 fileURLs:(id)arg7 resultHandler:(id)arg8 ;
-(id)transferInfoDictionary;
-(void)dealloc;
-(void)invalidate;
-(void)propagateResultForIdentifier:(id)arg0 withSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)transferWithIdentifierWasAccepted:(id)arg0 ;
-(void)transferWithIdentifierWasDeclined:(id)arg0 ;
-(void)transferWithIdentifierWasDeclined:(id)arg0 withFailureReason:(NSUInteger)arg1 ;
-(void)updateWithState:(NSInteger)arg0 completion:(id)arg1 ;


@end


#endif
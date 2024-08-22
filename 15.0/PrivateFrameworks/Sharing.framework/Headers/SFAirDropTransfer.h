// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFAIRDROPTRANSFER_H
#define SFAIRDROPTRANSFER_H

@class NSArray, NSString, NSURL, NSError, NSProgress;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SFAirDropAction.h"
#import "SFAirDropTransferMetaData.h"

@interface SFAirDropTransfer : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) SFAirDropAction *cancelAction; // ivar: _cancelAction
@property (copy, nonatomic) NSArray *completedURLs; // ivar: _completedURLs
@property (copy, nonatomic) NSString *contentsDescription; // ivar: _contentsDescription
@property (copy, nonatomic) NSString *contentsTitle; // ivar: _contentsTitle
@property (copy, nonatomic) NSURL *customDestinationURL; // ivar: _customDestinationURL
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) NSUInteger failureReason; // ivar: _failureReason
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isJustFiles;
@property (readonly, nonatomic) NSUInteger itemCount;
@property (retain, nonatomic) SFAirDropTransferMetaData *metaData; // ivar: _metaData
@property (readonly, nonatomic) BOOL needsAction;
@property (retain, nonatomic) NSArray *possibleActions; // ivar: _possibleActions
@property (retain, nonatomic) id *progressToken; // ivar: _progressToken
@property (retain, nonatomic) SFAirDropAction *selectedAction; // ivar: _selectedAction
@property (retain, nonatomic) NSProgress *transferProgress; // ivar: _transferProgress
@property (nonatomic) NSUInteger transferState; // ivar: _transferState
@property (nonatomic) NSUInteger userResponse; // ivar: _userResponse


+(BOOL)automaticallyNotifiesObserversOfFailureReason;
+(BOOL)automaticallyNotifiesObserversOfTransferState;
+(BOOL)automaticallyNotifiesObserversOfUserResponse;
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingNeedsAction;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)updateUsingCoder:(id)arg0 ;
-(BOOL)updateWithTransfer:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 initialInformation:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setUpProgress;
-(void)setUpProgressToBroadcast:(BOOL)arg0 ;
-(void)updateWithInformation:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKIMCOMPOSERECIPIENT_H
#define CKIMCOMPOSERECIPIENT_H

@class CNComposeRecipient, NSString, IMHandle;
@protocol CKIMComposeRecipient;



@interface CKIMComposeRecipient : CNComposeRecipient <CKIMComposeRecipient>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) IMHandle *handle; // ivar: _handle
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useAbbreviatedDisplayName; // ivar: _useAbbreviatedDisplayName


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isRemovableFromSearchResults;
-(id)address;
-(id)commentedAddress;
-(id)compositeName;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)displayString;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHandle:(id)arg0 ;
-(id)objectForDragType:(id)arg0 ;
-(id)supportedDragTypes;
-(id)uncommentedAddress;
-(id)unlocalizedLabel;
-(void)encodeWithCoder:(id)arg0 ;
-(void)releaseIMReferences;
-(void)setIdentifier:(int)arg0 ;


@end


#endif
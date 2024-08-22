// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIAIRDROPNODE_H
#define UIAIRDROPNODE_H

@class NSString, SFProxyText, NSUUID, SDSuggestionNode;
@protocol NSSecureCoding, SHSheetPeopleSuggestionProxy, SFPeopleSuggestion;

#import <Foundation/Foundation.h>


@interface UIAirDropNode : NSObject <NSSecureCoding, SHSheetPeopleSuggestionProxy>

 {
    uint8_t _avatarImageSlotID;
    uint8_t _transportImageSlotID;
    uint8_t _mainLabelSlotID;
    uint8_t _mainLabelSlotHeight;
    uint8_t _bottomLabelSlotID;
}


@property (readonly, nonatomic) unsigned int avatarImageSlotID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SFProxyText *displayName; // ivar: _displayName
@property (nonatomic) BOOL hasSquareImage; // ivar: _hasSquareImage
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (nonatomic) BOOL isDisabled; // ivar: _isDisabled
@property (nonatomic) BOOL isMagicHead; // ivar: _isMagicHead
@property (nonatomic) BOOL isRestricted; // ivar: _isRestricted
@property (copy, nonatomic) id *loadHandler; // ivar: _loadHandler
@property (retain, nonatomic) NSObject<SFPeopleSuggestion> *peopleSuggestion; // ivar: _peopleSuggestion
@property (nonatomic) NSInteger selectionReason; // ivar: _selectionReason
@property (retain, nonatomic) SFProxyText *subtitle; // ivar: _subtitle
@property (retain, nonatomic) SDSuggestionNode *suggestionNode; // ivar: _suggestionNode
@property (retain, nonatomic) NSString *suggestionReason; // ivar: _suggestionReason
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned int transportImageSlotID;


+(BOOL)supportsSecureCoding;
+(id)nodeWithIdentifier:(id)arg0 displayName:(id)arg1 subtitle:(id)arg2 avatarImageSlotID:(unsigned int)arg3 transportImageSlotID:(unsigned int)arg4 ;
+(id)nodeWithIdentifier:(id)arg0 suggestionNode:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)load;
-(CGFloat)mainLabelSlotHeight;
-(id)initWithCoder:(id)arg0 ;
-(unsigned int)bottomLabelSlotID;
-(unsigned int)imageSlotID;
-(unsigned int)mainLabelSlotID;
-(unsigned int)transportSlotID;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setBottomLabelSlotID:(unsigned int)arg0 ;
-(void)setMainLabelSlotHeight:(CGFloat)arg0 ;
-(void)setMainLabelSlotID:(unsigned int)arg0 ;


@end


#endif
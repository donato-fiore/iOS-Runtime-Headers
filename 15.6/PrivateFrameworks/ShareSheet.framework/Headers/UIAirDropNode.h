// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIAIRDROPNODE_H
#define UIAIRDROPNODE_H

@class NSString, NSUUID, SDSuggestionNode;
@protocol NSSecureCoding, SHSheetLoadableProxy;

#import <Foundation/Foundation.h>

#import "SHSheetPeopleSuggestion.h"

@interface UIAirDropNode : NSObject <NSSecureCoding, SHSheetLoadableProxy>

 {
    uint8_t _imageSlotID;
    uint8_t _transportSlotID;
    uint8_t _mainLabelSlotID;
    uint8_t _bottomLabelSlotID;
}


@property unsigned int bottomLabelSlotID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (nonatomic) BOOL hasSquareImage; // ivar: _hasSquareImage
@property (readonly) NSUInteger hash;
@property unsigned int imageSlotID;
@property (copy, nonatomic) id *loadHandler; // ivar: _loadHandler
@property (nonatomic) BOOL magicHead; // ivar: _magicHead
@property unsigned int mainLabelSlotID;
@property (retain, nonatomic) NSUUID *nodeIdentifier; // ivar: _nodeIdentifier
@property (retain, nonatomic) SHSheetPeopleSuggestion *peopleSuggestion; // ivar: _peopleSuggestion
@property (nonatomic, getter=isRestricted) BOOL restricted; // ivar: _restricted
@property (nonatomic) NSInteger selectionReason; // ivar: _selectionReason
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) SDSuggestionNode *suggestionNode; // ivar: _suggestionNode
@property (readonly) Class superclass;
@property unsigned int transportSlotID;


+(BOOL)supportsSecureCoding;
+(id)nodeWithImageSlotID:(unsigned int)arg0 labelSlotID:(unsigned int)arg1 transportSlotID:(unsigned int)arg2 ;
+(id)nodeWithSuggestionNode:(id)arg0 wantsPeopleSuggestionData:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)load;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
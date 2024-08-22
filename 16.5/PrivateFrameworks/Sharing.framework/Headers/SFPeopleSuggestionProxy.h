// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFPEOPLESUGGESTIONPROXY_H
#define SFPEOPLESUGGESTIONPROXY_H

@class NSString, NSUUID, SDSuggestionNode;
@protocol SFLoadableProxy, SFPeopleSuggestionProxy, NSSecureCoding, SFPeopleSuggestion;

#import <Foundation/Foundation.h>

#import "SFProxyText.h"

@interface SFPeopleSuggestionProxy : NSObject <SFLoadableProxy, SFPeopleSuggestionProxy, NSSecureCoding>

 {
    uint8_t _avatarImageSlotID;
    uint8_t _transportImageSlotID;
}


@property unsigned int avatarImageSlotID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disabled; // ivar: _disabled
@property (retain, nonatomic) SFProxyText *displayName; // ivar: _displayName
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isDisabled;
@property (copy, nonatomic) id *loadHandler; // ivar: _loadHandler
@property (retain, nonatomic) NSObject<SFPeopleSuggestion> *peopleSuggestion; // ivar: _peopleSuggestion
@property (retain, nonatomic) SFProxyText *subtitle; // ivar: _subtitle
@property (retain, nonatomic) SDSuggestionNode *suggestionNode; // ivar: _suggestionNode
@property (readonly) Class superclass;
@property unsigned int transportImageSlotID;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)load;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPeopleSuggestion:(id)arg0 ;
-(id)initWithSuggestionNode:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMFRONTBOARDDISPLAYLAYOUTELEMENT_H
#define BMFRONTBOARDDISPLAYLAYOUTELEMENT_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMFrontBoardDisplayLayoutElement : BMEventBase <BMStoreData>



@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasHasKeyboardFocus; // ivar: _hasHasKeyboardFocus
@property (nonatomic) BOOL hasIsUIApplicationElement; // ivar: _hasIsUIApplicationElement
@property (readonly, nonatomic) BOOL hasKeyboardFocus; // ivar: _hasKeyboardFocus
@property (nonatomic) BOOL hasLayoutRole; // ivar: _hasLayoutRole
@property (nonatomic) BOOL hasLevel; // ivar: _hasLevel
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isUIApplicationElement; // ivar: _isUIApplicationElement
@property (readonly, nonatomic) NSInteger layoutRole; // ivar: _layoutRole
@property (readonly, nonatomic) NSInteger level; // ivar: _level
@property (readonly) Class superclass;
@property (readonly, nonatomic) int type; // ivar: _type


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 bundleIdentifier:(id)arg1 type:(int)arg2 layoutRole:(id)arg3 level:(id)arg4 hasKeyboardFocus:(id)arg5 isUIApplicationElement:(id)arg6 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif
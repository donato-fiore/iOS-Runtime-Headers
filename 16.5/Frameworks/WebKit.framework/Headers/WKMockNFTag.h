// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKMOCKNFTAG_H
#define WKMOCKNFTAG_H

@class NSData, NSString;
@protocol NFTag, NFTagA, NFTagB, NFTagF;

#import <Foundation/Foundation.h>


@interface WKMockNFTag : NSObject <NFTag>

 {
    unsigned int _type;
    RetainPtr<NSData> _tagID;
}


@property (readonly, copy, nonatomic) NSData *AppData; // ivar: _AppData
@property (readonly, copy, nonatomic) NSData *UID; // ivar: _UID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int ndefAvailability; // ivar: _ndefAvailability
@property (readonly, nonatomic) NSUInteger ndefContainerSize; // ivar: _ndefContainerSize
@property (readonly, nonatomic) NSUInteger ndefMessageSize; // ivar: _ndefMessageSize
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<NFTagA> *tagA; // ivar: _tagA
@property (readonly, nonatomic) NSObject<NFTagB> *tagB; // ivar: _tagB
@property (readonly, nonatomic) NSObject<NFTagF> *tagF; // ivar: _tagF
@property (readonly, copy, nonatomic) NSData *tagID;
@property (readonly, nonatomic) unsigned int technology; // ivar: _technology
@property (readonly, nonatomic) unsigned int type;


-(BOOL)isEqualToNFTag:(id)arg0 ;
-(id)initWithNFTag:(id)arg0 ;
-(id)initWithType:(unsigned int)arg0 ;
-(id)initWithType:(unsigned int)arg0 tagID:(id)arg1 ;
-(void)dealloc;


@end


#endif
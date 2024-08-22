// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSPREORDER_H
#define SSPREORDER_H

@class NSString, NSDate, NSNumber;
@protocol SSXPCCoding;

#import <Foundation/Foundation.h>

#import "SSItemImageCollection.h"

@interface SSPreorder : NSObject <SSXPCCoding>

 {
    CGFloat _releaseDate;
}


@property (readonly, nonatomic) NSString *artistName; // ivar: _artistName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SSItemImageCollection *imageCollection; // ivar: _imageCollection
@property (readonly, nonatomic) NSString *itemKind; // ivar: _itemKind
@property (readonly, nonatomic) NSInteger persistentIdentifier; // ivar: _pid
@property (readonly, nonatomic) NSDate *releaseDate;
@property (readonly, nonatomic) NSString *releaseDateString; // ivar: _releaseDateString
@property (readonly, nonatomic) NSNumber *storeAccountIdentifier; // ivar: _accountID
@property (readonly, nonatomic) NSUInteger storeItemIdentifier; // ivar: _itemID
@property (readonly, nonatomic) NSUInteger storePreorderIdentifier; // ivar: _preorderID
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithPersistentIdentifier:(NSInteger)arg0 ;
-(id)copyReleaseDateStringWithStyle:(NSInteger)arg0 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)dealloc;


@end


#endif
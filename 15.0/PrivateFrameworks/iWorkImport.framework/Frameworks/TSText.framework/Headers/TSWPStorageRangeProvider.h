// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPSTORAGERANGEPROVIDER_H
#define TSWPSTORAGERANGEPROVIDER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TSWPStorageRangeProvider : NSObject

@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSObject *object; // ivar: _object
@property (nonatomic) _NSRange range; // ivar: _range


-(id)initWithIdentifier:(id)arg0 ;
-(void)nextRange;


@end


#endif
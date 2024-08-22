// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITRAITSTORAGE_H
#define _UITRAITSTORAGE_H

@class NSMutableArray, NSString;
@protocol NSCoding;

#import <Foundation/Foundation.h>


@interface _UITraitStorage : NSObject <NSCoding>

 {
    NSMutableArray *_records;
}


@property (readonly, nonatomic) NSString *keyPath; // ivar: _keyPath
@property (readonly, weak, nonatomic) id *object; // ivar: _object


-(id)_propertyDescriptionString;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObject:(id)arg0 keyPath:(id)arg1 ;
-(id)records;
-(void)addRecord:(id)arg0 ;
-(void)applyRecordsMatchingTraitCollection:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
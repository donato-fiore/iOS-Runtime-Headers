// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSPDNSRESOURCERECORD_H
#define NSPDNSRESOURCERECORD_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NSPDNSResourceRecord : NSObject

@property (readonly) NSUInteger dataLength; // ivar: _dataLength
@property (readonly) NSString *name; // ivar: _name
@property (readonly) NSInteger recordClass; // ivar: _recordClass
@property (readonly) NSString *resourceString; // ivar: _resourceString
@property (readonly) NSUInteger timeToLive; // ivar: _timeToLive
@property (readonly) NSInteger type; // ivar: _type


+(id)typeToString:(NSInteger)arg0 ;
-(id)copyStateDictionary;
-(id)initFromByteParser:(id)arg0 ;


@end


#endif
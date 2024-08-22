// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICNOTEPASTEBOARDDATA_H
#define ICNOTEPASTEBOARDDATA_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ICDataPersister.h"

@interface ICNotePasteboardData : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *attributedStringData; // ivar: _attributedStringData
@property (readonly, nonatomic) ICDataPersister *dataPersister; // ivar: _dataPersister


+(BOOL)supportsSecureCoding;
+(id)pasteboardDataFromPersistenceData:(id)arg0 ;
-(id)init;
-(id)initWithAttributedStringData:(id)arg0 dataPersister:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)persistenceData;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
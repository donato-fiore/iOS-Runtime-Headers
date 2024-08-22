// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLDEFERREDLOGFORMATTER_H
#define PLDEFERREDLOGFORMATTER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface PLDeferredLogFormatter : NSObject {
    NSMutableArray *_entries;
}




+(BOOL)_isManagedObjectPointerForContext:(NSInteger)arg0 ;
+(id)_entityDescriptionForContext:(NSInteger)arg0 ;
+(id)_logTypeForContext:(NSInteger)arg0 ;
+(id)_serializableDictionaryForEntry:(id)arg0 ;
-(id)_JSONStringPretty:(BOOL)arg0 ;
-(id)_formattedStringForPrinting;
-(id)_plistString;
-(id)init;
-(id)stringWithFormat:(NSInteger)arg0 ;
-(void)addLogWithContext:(NSInteger)arg0 timestamp:(CGFloat)arg1 pointer:(NSUInteger)arg2 ;
-(void)clear;


@end


#endif
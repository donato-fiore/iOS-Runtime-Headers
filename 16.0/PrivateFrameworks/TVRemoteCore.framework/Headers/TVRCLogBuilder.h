// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRCLOGBUILDER_H
#define TVRCLOGBUILDER_H

@class NSString;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface TVRCLogBuilder : NSObject

@property (readonly, copy, nonatomic) NSString *context; // ivar: _context
@property (readonly, copy, nonatomic) NSObject<OS_os_log> *logger;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


-(id)_dataSetFromArray:(id)arg0 ;
-(id)_templateForDataSetData:(id)arg0 ;
-(id)initWithContext:(id)arg0 name:(id)arg1 ;
-(id)jsonForArray:(id)arg0 ;
-(id)jsonForDictionary:(id)arg0 ;
-(id)jsonForError:(id)arg0 ;


@end


#endif
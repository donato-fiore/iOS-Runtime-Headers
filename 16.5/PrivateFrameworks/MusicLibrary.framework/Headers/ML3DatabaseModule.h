// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ML3DATABASEMODULE_H
#define ML3DATABASEMODULE_H

@class NSString;
@protocol ML3DatabaseModuleContext;

#import <Foundation/Foundation.h>


@interface ML3DatabaseModule : NSObject

@property (retain, nonatomic) NSObject<ML3DatabaseModuleContext> *context; // ivar: _context
@property (readonly, nonatomic) *sqlite3_module moduleMethods; // ivar: _moduleMethods
@property (readonly, nonatomic) NSString *name; // ivar: _name


-(id)description;
-(id)initWithName:(id)arg0 moduleMethods:(struct sqlite3_module *)arg1 ;


@end


#endif
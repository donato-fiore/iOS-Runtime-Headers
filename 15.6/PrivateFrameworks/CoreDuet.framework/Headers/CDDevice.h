// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDDEVICE_H
#define CDDEVICE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CDDevice : NSObject

@property (readonly) unsigned int identifier; // ivar: _identifier
@property BOOL isDefaultPaired; // ivar: _isDefaultPaired
@property (readonly) NSString *modelIdentifier; // ivar: _modelIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDevice:(id)arg0 ;
-(BOOL)requestLogDataWithError:(*id)arg0 ;
-(BOOL)requestSystemDataWithError:(*id)arg0 ;
-(BOOL)setLogDataHandlerWithError:(*id)arg0 handler:(id)arg1 ;
-(BOOL)setSystemDataHandlerWithError:(*id)arg0 handler:(id)arg1 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithSession:(id)arg0 identifier:(unsigned int)arg1 modelIdentifier:(id)arg2 defaultPaired:(BOOL)arg3 error:(*id)arg4 ;
-(id)initWithSession:(id)arg0 identifier:(unsigned int)arg1 modelIdentifier:(id)arg2 error:(*id)arg3 ;
-(id)readLogDataWithError:(*id)arg0 ;
-(id)readSystemDataWithError:(*id)arg0 ;


@end


#endif